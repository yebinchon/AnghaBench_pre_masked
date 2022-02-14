
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int key_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int const*,size_t) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t,int ) ;
 int FUNC_6 (int ,int) ;
 char* FUNC_7 (char*,char const*,size_t) ;
 size_t FUNC_8 (char const*) ;

int FUNC_9(const u8 *VAR_5, size_t VAR_6, const char *VAR_7)
{
 key_ref_t VAR_8;
 size_t VAR_9 = FUNC_8(VAR_7);
 char *VAR_10, *VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_5(VAR_9 + 1 + VAR_6 * 2 + 1, VAR_2);
 if (!VAR_10)
  return -VAR_1;
 VAR_11 = FUNC_7(VAR_10, VAR_7, VAR_9);
 VAR_11 += VAR_9;
 *VAR_11++ = ':';
 FUNC_1(VAR_11, VAR_5, VAR_6);
 VAR_11 += VAR_6 * 2;
 *VAR_11 = 0;

 VAR_8 = FUNC_3(FUNC_6(VAR_3, 1),
         &VAR_4, VAR_10, 0);
 if (!FUNC_0(VAR_8)) {
  FUNC_2(VAR_8);
  VAR_12 = -VAR_0;
 }

 FUNC_4(VAR_10);
 return VAR_12;
}
