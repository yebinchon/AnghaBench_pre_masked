
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rb_root {int dummy; } ;
struct hv_24x7_event_data {scalar_t__ event_group_record_len; int domain; int length; } ;
struct hv_24x7_catalog_page_0 {int event_data_len; int event_data_offs; int event_entry_count; int length; int version; } ;
struct attribute {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct rb_root VAR_5 ;
 int VAR_6 ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (struct hv_24x7_event_data*,size_t,size_t,size_t,size_t,void*) ;
 size_t FUNC_6 (size_t,struct attribute**,struct hv_24x7_event_data*,int) ;
 char* FUNC_7 (struct hv_24x7_event_data*,int*) ;
 struct attribute* FUNC_8 (struct hv_24x7_event_data*,int) ;
 struct attribute* FUNC_9 (struct hv_24x7_event_data*,int) ;
 int FUNC_10 (struct rb_root*,char*,int,int ) ;
 int FUNC_11 (struct rb_root*) ;
 long FUNC_12 (void*,int ,int ) ;
 long FUNC_13 (int ,int ,size_t) ;
 int VAR_7 ;
 int FUNC_14 (struct attribute**) ;
 struct attribute** FUNC_15 (size_t,int,int ) ;
 struct hv_24x7_catalog_page_0* FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,void*) ;
 int FUNC_18 (char*,size_t,int,...) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (char*,size_t,size_t,...) ;
 int FUNC_21 (char*,size_t,int,...) ;
 int FUNC_22 (void*) ;
 void* FUNC_23 (size_t) ;
 int FUNC_24 (void*) ;

__attribute__((used)) static int FUNC_25(struct attribute ***VAR_8,
          struct attribute ***VAR_9,
          struct attribute ***VAR_10)
{
 long VAR_11;
 size_t VAR_12, VAR_13, VAR_14,
        VAR_15, VAR_16,
        VAR_17, VAR_18, VAR_19, VAR_20, VAR_21,
        VAR_22, VAR_23, VAR_24, VAR_25;
 ssize_t VAR_26, VAR_27;
 uint64_t VAR_28;
 struct attribute **VAR_29, **VAR_30, **VAR_31;
 struct hv_24x7_catalog_page_0 *VAR_32 =
  FUNC_16(VAR_7, VAR_2);
 void *VAR_33 = VAR_32;
 void *VAR_34, *VAR_35;
 struct hv_24x7_event_data *VAR_36;
 struct rb_root VAR_37 = VAR_5;
 int VAR_38 = 0;

 if (!VAR_33) {
  VAR_38 = -VAR_1;
  goto e_out;
 }

 VAR_11 = FUNC_12(VAR_33, 0, 0);
 if (VAR_11) {
  VAR_38 = -VAR_0;
  goto e_free;
 }

 VAR_28 = FUNC_3(VAR_32->version);
 VAR_13 = FUNC_2(VAR_32->length);

 if (VAR_3 < VAR_13) {
  FUNC_19("invalid page count: %zu\n", VAR_13);
  VAR_38 = -VAR_0;
  goto e_free;
 }

 VAR_12 = VAR_13 * 4096;

 VAR_14 = FUNC_1(VAR_32->event_entry_count);
 VAR_16 = FUNC_1(VAR_32->event_data_offs);
 VAR_15 = FUNC_1(VAR_32->event_data_len);

 FUNC_18("cv %llu cl %zu eec %zu edo %zu edl %zu\n",
   VAR_28, VAR_12,
   VAR_14, VAR_16, VAR_15);

 if ((VAR_3 < VAR_15)
   || (VAR_3 < VAR_16)
   || (VAR_3 - VAR_16 < VAR_15)) {
  FUNC_19("invalid event data offs %zu and/or len %zu\n",
    VAR_16, VAR_15);
  VAR_38 = -VAR_0;
  goto e_free;
 }

 if ((VAR_16 + VAR_15) > VAR_13) {
  FUNC_19("event data %zu-%zu does not fit inside catalog 0-%zu\n",
    VAR_16,
    VAR_16 + VAR_15,
    VAR_13);
  VAR_38 = -VAR_0;
  goto e_free;
 }

 if (VAR_6 - 1 < VAR_14) {
  FUNC_19("event_entry_count %zu is invalid\n", VAR_14);
  VAR_38 = -VAR_0;
  goto e_free;
 }

 VAR_17 = VAR_15 * 4096;





 VAR_34 = FUNC_23(VAR_17);
 if (!VAR_34) {
  FUNC_19("could not allocate event data\n");
  VAR_38 = -VAR_1;
  goto e_free;
 }

 VAR_35 = VAR_34 + VAR_17;





 FUNC_0(VAR_4 % 4096);

 for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
  VAR_11 = FUNC_13(
    FUNC_24(VAR_34 + VAR_21 * 4096),
    VAR_28,
    VAR_21 + VAR_16);
  if (VAR_11) {
   FUNC_19("Failed to get event data in page %zu: rc=%ld\n",
          VAR_21 + VAR_16, VAR_11);
   VAR_38 = -VAR_0;
   goto e_event_data;
  }
 }





 for (VAR_18 = 0, VAR_36 = VAR_34, VAR_19 = 0, VAR_22 = 0;
      ;
      VAR_19++, VAR_36 = (void *)VAR_36 + VAR_27) {
  size_t VAR_39 = (void *)VAR_36 - (void *)VAR_34;
  char *VAR_40;
  int VAR_41;

  VAR_27 = FUNC_5(VAR_36, VAR_19,
          VAR_17,
          VAR_14,
          VAR_39, VAR_35);
  if (VAR_27 < 0)
   break;

  VAR_40 = FUNC_7(VAR_36, &VAR_41);

  if (VAR_36->event_group_record_len == 0) {
   FUNC_18("invalid event %zu (%.*s): group_record_len == 0, skipping\n",
     VAR_19, VAR_41, VAR_40);
   VAR_18++;
   continue;
  }

  if (!FUNC_4(VAR_36->domain)) {
   FUNC_20("event %zu (%.*s) has invalid domain %d\n",
     VAR_19, VAR_41, VAR_40, VAR_36->domain);
   VAR_18++;
   continue;
  }

  VAR_22++;
 }

 VAR_23 = VAR_19;
 if (VAR_23 != VAR_14)
  FUNC_21("event buffer ended before listed # of events were parsed (got %zu, wanted %zu, junk %zu)\n",
    VAR_23, VAR_14, VAR_18);

 VAR_29 = FUNC_15(VAR_22 + 1, sizeof(*VAR_29), VAR_2);
 if (!VAR_29) {
  VAR_38 = -VAR_1;
  goto e_event_data;
 }

 VAR_30 = FUNC_15(VAR_19 + 1, sizeof(*VAR_30),
    VAR_2);
 if (!VAR_30) {
  VAR_38 = -VAR_1;
  goto e_event_attrs;
 }

 VAR_31 = FUNC_15(VAR_19 + 1,
   sizeof(*VAR_31), VAR_2);
 if (!VAR_31) {
  VAR_38 = -VAR_1;
  goto e_event_descs;
 }


 for (VAR_18 = 0, VAR_20 = 0, VAR_24 = 0, VAR_25 = 0,
    VAR_36 = VAR_34, VAR_19 = 0;
   VAR_19 < VAR_23;
   VAR_19++, VAR_27 = FUNC_1(VAR_36->length),
    VAR_36 = (void *)VAR_36 + VAR_27) {
  char *VAR_42;
  int VAR_43;
  int VAR_44;




  if (VAR_36->event_group_record_len == 0)
   continue;
  if (!FUNC_4(VAR_36->domain))
   continue;

  VAR_42 = FUNC_7(VAR_36, &VAR_43);
  VAR_44 = FUNC_10(&VAR_37, VAR_42, VAR_43, VAR_36->domain);
  VAR_26 = FUNC_6(VAR_19, VAR_29 + VAR_20,
         VAR_36, VAR_44);
  if (VAR_26 < 0) {
   FUNC_21("event %zu (%.*s) creation failure, skipping\n",
    VAR_19, VAR_43, VAR_42);
   VAR_18++;
  } else {
   VAR_20++;
   VAR_30[VAR_24] = FUNC_8(VAR_36, VAR_44);
   if (VAR_30[VAR_24])
    VAR_24++;
   VAR_31[VAR_25] =
     FUNC_9(VAR_36, VAR_44);
   if (VAR_31[VAR_25])
    VAR_25++;
  }
 }

 FUNC_20("read %zu catalog entries, created %zu event attrs (%zu failures), %zu descs\n",
   VAR_19, VAR_20, VAR_18, VAR_24);

 VAR_29[VAR_20] = ((void*)0);
 VAR_30[VAR_24] = ((void*)0);
 VAR_31[VAR_25] = ((void*)0);

 FUNC_11(&VAR_37);
 FUNC_22(VAR_34);
 FUNC_17(VAR_7, VAR_33);

 *VAR_8 = VAR_29;
 *VAR_9 = VAR_30;
 *VAR_10 = VAR_31;
 return 0;

e_event_descs:
 FUNC_14(VAR_30);
e_event_attrs:
 FUNC_14(VAR_29);
e_event_data:
 FUNC_22(VAR_34);
e_free:
 FUNC_17(VAR_7, VAR_33);
e_out:
 *VAR_8 = ((void*)0);
 *VAR_9 = ((void*)0);
 *VAR_10 = ((void*)0);
 return VAR_38;
}
