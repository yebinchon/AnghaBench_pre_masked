
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int ar_event; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct kaudit_record* FUNC_2 (int ,struct thread*,int ) ;

struct kaudit_record *
FUNC_3(int VAR_4, struct thread *VAR_5)
{
 struct kaudit_record *VAR_6;






 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_0);
 VAR_6->k_ar.ar_event = VAR_4;

 FUNC_0(&VAR_1);
 VAR_2++;
 FUNC_1(&VAR_1);

 return (VAR_6);
}
