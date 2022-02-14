
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct shash_desc {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int FUNC_0 (struct shash_desc*,int *) ;
 int FUNC_1 (struct shash_desc*) ;
 int FUNC_2 (struct shash_desc*,void*,scalar_t__) ;
 int FUNC_3 (char*) ;

enum i40iw_status_code FUNC_4(struct shash_desc *VAR_1,
           void *VAR_2,
           u32 VAR_3,
           u32 VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6;
 enum i40iw_status_code VAR_7 = 0;

 FUNC_1(VAR_1);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (!VAR_6)
  FUNC_0(VAR_1, (u8 *)&VAR_5);
 if (VAR_5 != VAR_4) {
  FUNC_3("mpa crc check fail\n");
  VAR_7 = VAR_0;
 }
 return VAR_7;
}
