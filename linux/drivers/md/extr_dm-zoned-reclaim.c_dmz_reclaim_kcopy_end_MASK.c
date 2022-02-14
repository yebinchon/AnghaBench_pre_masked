
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_reclaim {int flags; int kc_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_2, unsigned long VAR_3,
      void *VAR_4)
{
 struct dmz_reclaim *VAR_5 = VAR_4;

 if (VAR_2 || VAR_3)
  VAR_5->kc_err = -VAR_1;
 else
  VAR_5->kc_err = 0;

 FUNC_0(VAR_0, &VAR_5->flags);
 FUNC_1();
 FUNC_2(&VAR_5->flags, VAR_0);
}
