
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_thread {int proc; } ;


 int FUNC_0 (struct binder_thread*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct binder_thread *VAR_0, bool VAR_1)
{
 bool VAR_2;

 FUNC_1(VAR_0->proc);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0->proc);

 return VAR_2;
}
