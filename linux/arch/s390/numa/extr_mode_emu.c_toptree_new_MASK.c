
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toptree {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct toptree* FUNC_1 (int ,int) ;
 int FUNC_2 (struct toptree*,int) ;

__attribute__((used)) static struct toptree *FUNC_3(int VAR_1, int VAR_2)
{
 struct toptree *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3)
  goto fail;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_2(VAR_3, VAR_4))
   goto fail;
 }
 return VAR_3;
fail:
 FUNC_0("NUMA emulation could not allocate topology");
}
