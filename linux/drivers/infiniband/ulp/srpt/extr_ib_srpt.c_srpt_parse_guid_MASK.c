
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,char*,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(u64 *VAR_1, const char *VAR_2)
{
 u16 VAR_3[4];
 int VAR_4 = -VAR_0;

 if (FUNC_1(VAR_2, "%hx:%hx:%hx:%hx", &VAR_3[0], &VAR_3[1], &VAR_3[2], &VAR_3[3]) != 4)
  goto out;
 *VAR_1 = FUNC_0(VAR_3);
 VAR_4 = 0;
out:
 return VAR_4;
}
