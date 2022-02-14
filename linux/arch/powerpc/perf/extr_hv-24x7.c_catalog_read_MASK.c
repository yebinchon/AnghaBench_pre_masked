
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct kobject {int dummy; } ;
struct hv_24x7_catalog_page_0 {int length; int version; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 long FUNC_2 (void*,scalar_t__,int) ;
 int VAR_3 ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (char*,void*,size_t) ;
 int FUNC_6 (char*,int,int,size_t,size_t,size_t,size_t) ;
 int FUNC_7 (char*,scalar_t__,int,long) ;

__attribute__((used)) static ssize_t FUNC_8(struct file *VAR_4, struct kobject *VAR_5,
       struct bin_attribute *VAR_6, char *VAR_7,
       loff_t VAR_8, size_t VAR_9)
{
 long VAR_10;
 ssize_t VAR_11 = 0;
 size_t VAR_12 = 0, VAR_13 = 0;
 loff_t VAR_14 = 0;
 loff_t VAR_15;
 size_t VAR_16;
 uint64_t VAR_17 = 0;
 void *VAR_18 = FUNC_3(VAR_3, VAR_2);
 struct hv_24x7_catalog_page_0 *VAR_19 = VAR_18;

 if (!VAR_18)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_18, 0, 0);
 if (VAR_10) {
  VAR_11 = -VAR_0;
  goto e_free;
 }

 VAR_17 = FUNC_1(VAR_19->version);
 VAR_13 = FUNC_0(VAR_19->length);
 VAR_12 = VAR_13 * 4096;

 VAR_14 = VAR_8 / 4096;
 VAR_15 = VAR_8 % 4096;

 if (VAR_14 >= VAR_13)
  goto e_free;

 if (VAR_14 != 0) {
  VAR_10 = FUNC_2(VAR_18, VAR_17,
            VAR_14);
  if (VAR_10) {
   VAR_11 = -VAR_0;
   goto e_free;
  }
 }

 VAR_16 = 4096 - VAR_15;
 if (VAR_16 > VAR_9)
  VAR_16 = VAR_9;

 FUNC_5(VAR_7, VAR_18+VAR_15, VAR_16);
 VAR_11 = VAR_16;

e_free:
 if (VAR_10)
  FUNC_7("h_get_24x7_catalog_page(ver=%lld, page=%lld) failed:"
         " rc=%ld\n",
         VAR_17, VAR_14, VAR_10);
 FUNC_4(VAR_3, VAR_18);

 FUNC_6("catalog_read: offset=%lld(%lld) count=%zu "
   "catalog_len=%zu(%zu) => %zd\n", VAR_8, VAR_14,
   VAR_9, VAR_12, VAR_13, VAR_11);

 return VAR_11;
}
