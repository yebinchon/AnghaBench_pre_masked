
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct label*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1, void *VAR_2)
{
 struct label *VAR_3;

 FUNC_0(VAR_1 == sizeof(*VAR_3), ("mac_labelzone_dtor: wrong size\n"));
 VAR_3 = VAR_0;
 FUNC_1(VAR_3);
}
