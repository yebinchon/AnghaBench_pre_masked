
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef unsigned int u16 ;
typedef int tmp_name ;
struct request {unsigned int request_type; int request_len; int * put_cname_in_ptr; int * request; struct evdns_base* base; } ;
struct TYPE_7__ {int addrcount; int * addresses; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {int addrcount; int * addresses; } ;
struct TYPE_8__ {TYPE_3__ aaaa; TYPE_2__ ptr; TYPE_1__ a; } ;
struct reply {unsigned int type; int have_answer; TYPE_4__ data; } ;
struct evdns_base {int global_randomize_case; } ;
typedef int reply ;
typedef int cname ;
typedef int cmp_name ;


 int FUNC_0 (struct evdns_base*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,int) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct reply*,int ,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *,int,int*,char*,int) ;
 int FUNC_10 (struct request*,unsigned int,int,struct reply*) ;
 struct request* FUNC_11 (struct evdns_base*,unsigned int) ;
 scalar_t__ FUNC_12 (char*,char*) ;

__attribute__((used)) static int
FUNC_13(struct evdns_base *VAR_14, u8 *VAR_15, int VAR_16) {
 int VAR_17 = 0, VAR_18 = 0;
 u16 VAR_19;
 u32 VAR_20;
 char VAR_21[256], VAR_22[256];
 int VAR_23 = 0;

 u16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 u16 VAR_30 = 0;
 u32 VAR_31, VAR_32 = 0xffffffff;
 struct reply VAR_33;
 struct request *VAR_34 = ((void*)0);
 unsigned int VAR_35;

 FUNC_0(VAR_14);

 FUNC_2(VAR_24);
 FUNC_2(VAR_30);
 FUNC_2(VAR_25);
 FUNC_2(VAR_26);
 FUNC_2(VAR_27);
 FUNC_2(VAR_28);
 (void) VAR_27;
 (void) VAR_28;

 VAR_34 = FUNC_11(VAR_14, VAR_24);
 if (!VAR_34) return -1;
 FUNC_1(VAR_34->base == VAR_14);

 FUNC_7(&VAR_33, 0, sizeof(VAR_33));


 if (!(VAR_30 & VAR_11)) return -1;
 if ((VAR_30 & (VAR_12|VAR_13)) && (VAR_30 & (VAR_12|VAR_13)) != VAR_1) {

  goto err;
 }
 VAR_33.type = VAR_34->request_type;


 for (VAR_35 = 0; VAR_35 < VAR_25; ++VAR_35) {



  VAR_21[0] = '\0';
  VAR_22[0] = '\0';
  VAR_18 = VAR_17;
  if (FUNC_9(VAR_15, VAR_16, &VAR_17, VAR_21, sizeof(VAR_21)) < 0)
   goto err;
  if (FUNC_9(VAR_34->request, VAR_34->request_len, &VAR_18,
   VAR_22, sizeof(VAR_22))<0)
   goto err;
  if (!VAR_14->global_randomize_case) {
   if (FUNC_12(VAR_21, VAR_22) == 0)
    VAR_23 = 1;
  } else {
   if (FUNC_5(VAR_21, VAR_22) == 0)
    VAR_23 = 1;
  }

  VAR_17 += 4;
  if (VAR_17 > VAR_16)
   goto err;
 }

 if (!VAR_23)
  goto err;





 for (VAR_35 = 0; VAR_35 < VAR_26; ++VAR_35) {
  u16 VAR_36, VAR_37;

  do { VAR_21[0] = '\0'; if (FUNC_9(VAR_15, VAR_16, &VAR_17, VAR_21, sizeof(VAR_21))<0) goto err; } while (0);
  FUNC_2(VAR_36);
  FUNC_2(VAR_37);
  FUNC_3(VAR_31);
  FUNC_2(VAR_29);

  if (VAR_36 == VAR_6 && VAR_37 == VAR_0) {
   int VAR_38, VAR_39;
   if (VAR_34->request_type != VAR_6) {
    VAR_17 += VAR_29; continue;
   }
   if ((VAR_29 & 3) != 0)
       goto err;
   VAR_38 = VAR_29 >> 2;
   VAR_39 = FUNC_4(VAR_3 - VAR_33.data.a.addrcount, (unsigned)VAR_38);

   VAR_32 = FUNC_4(VAR_32, VAR_31);

   if (VAR_17 + 4*VAR_39 > VAR_16) goto err;
   FUNC_6(&VAR_33.data.a.addresses[VAR_33.data.a.addrcount],
       VAR_15 + VAR_17, 4*VAR_39);
   VAR_17 += 4*VAR_39;
   VAR_33.data.a.addrcount += VAR_39;
   VAR_33.have_answer = 1;
   if (VAR_33.data.a.addrcount == VAR_3) break;
  } else if (VAR_36 == VAR_9 && VAR_37 == VAR_0) {
   if (VAR_34->request_type != VAR_9) {
    VAR_17 += VAR_29; continue;
   }
   if (FUNC_9(VAR_15, VAR_16, &VAR_17, VAR_33.data.ptr.name,
         sizeof(VAR_33.data.ptr.name))<0)
    goto err;
   VAR_32 = FUNC_4(VAR_32, VAR_31);
   VAR_33.have_answer = 1;
   break;
  } else if (VAR_36 == VAR_8) {
   char VAR_40[VAR_2];
   if (!VAR_34->put_cname_in_ptr || *VAR_34->put_cname_in_ptr) {
    VAR_17 += VAR_29; continue;
   }
   if (FUNC_9(VAR_15, VAR_16, &VAR_17, VAR_40,
    sizeof(VAR_40))<0)
    goto err;
   *VAR_34->put_cname_in_ptr = FUNC_8(VAR_40);
  } else if (VAR_36 == VAR_7 && VAR_37 == VAR_0) {
   int VAR_41, VAR_42;
   if (VAR_34->request_type != VAR_7) {
    VAR_17 += VAR_29; continue;
   }
   if ((VAR_29 & 15) != 0)
    goto err;
   VAR_41 = VAR_29 >> 4;
   VAR_42 = FUNC_4(VAR_4 - VAR_33.data.aaaa.addrcount, (unsigned)VAR_41);
   VAR_32 = FUNC_4(VAR_32, VAR_31);


   if (VAR_17 + 16*VAR_42 > VAR_16) goto err;
   FUNC_6(&VAR_33.data.aaaa.addresses[VAR_33.data.aaaa.addrcount],
       VAR_15 + VAR_17, 16*VAR_42);
   VAR_33.data.aaaa.addrcount += VAR_42;
   VAR_17 += 16*VAR_42;
   VAR_33.have_answer = 1;
   if (VAR_33.data.aaaa.addrcount == VAR_4) break;
  } else {

   VAR_17 += VAR_29;
  }
 }

 if (!VAR_33.have_answer) {
  for (VAR_35 = 0; VAR_35 < VAR_27; ++VAR_35) {
   u16 VAR_43, VAR_44;
   do { VAR_21[0] = '\0'; if (FUNC_9(VAR_15, VAR_16, &VAR_17, VAR_21, sizeof(VAR_21))<0) goto err; } while (0);
   FUNC_2(VAR_43);
   FUNC_2(VAR_44);
   FUNC_3(VAR_31);
   FUNC_2(VAR_29);
   if (VAR_43 == VAR_10 && VAR_44 == VAR_0) {
    u32 VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
    do { VAR_21[0] = '\0'; if (FUNC_9(VAR_15, VAR_16, &VAR_17, VAR_21, sizeof(VAR_21))<0) goto err; } while (0);
    do { VAR_21[0] = '\0'; if (FUNC_9(VAR_15, VAR_16, &VAR_17, VAR_21, sizeof(VAR_21))<0) goto err; } while (0);
    FUNC_3(VAR_45);
    FUNC_3(VAR_46);
    FUNC_3(VAR_47);
    FUNC_3(VAR_48);
    FUNC_3(VAR_49);
    (void)VAR_48;
    (void)VAR_47;
    (void)VAR_46;
    (void)VAR_45;
    VAR_32 = FUNC_4(VAR_32, VAR_31);
    VAR_32 = FUNC_4(VAR_32, VAR_49);
   } else {

    VAR_17 += VAR_29;
   }
  }
 }

 if (VAR_32 == 0xffffffff)
  VAR_32 = 0;

 FUNC_10(VAR_34, VAR_30, VAR_32, &VAR_33);
 return 0;
 err:
 if (VAR_34)
  FUNC_10(VAR_34, VAR_30, 0, ((void*)0));
 return -1;
}
