
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_thread {int (* function ) (struct drbd_thread*) ;char const* name; int * connection; struct drbd_resource* resource; int t_state; int * task; int t_lock; } ;
struct drbd_resource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct drbd_resource *VAR_1, struct drbd_thread *VAR_2,
        int (*VAR_3) (struct drbd_thread *), const char *VAR_4)
{
 FUNC_0(&VAR_2->t_lock);
 VAR_2->task = ((void*)0);
 VAR_2->t_state = VAR_0;
 VAR_2->function = VAR_3;
 VAR_2->resource = VAR_1;
 VAR_2->connection = ((void*)0);
 VAR_2->name = VAR_4;
}
