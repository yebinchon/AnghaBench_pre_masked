
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,int ,int*) ;
 int FUNC_4 (int,int ,int) ;

void
FUNC_5(void)
{
 int VAR_9;

 FUNC_2("net.key.spdcache.maxentries",
     &VAR_4);
 FUNC_2("net.key.spdcache.threshold",
     &VAR_5);

 if (VAR_4) {
  VAR_4 = FUNC_0(VAR_4,
      VAR_3);
  VAR_8 = FUNC_3(VAR_4 /
      VAR_3,
      VAR_0, &VAR_7);
  VAR_4 = (VAR_7 + 1)
      * VAR_3;

  VAR_6 = FUNC_4(sizeof(struct mtx) *
      (VAR_7 + 1),
      VAR_0, VAR_1|VAR_2);

  for (VAR_9 = 0; VAR_9 < VAR_7 + 1; ++VAR_9)
   FUNC_1(VAR_9);
 }
}
