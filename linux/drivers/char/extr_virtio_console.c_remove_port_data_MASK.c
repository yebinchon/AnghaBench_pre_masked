
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int outvq_lock; int inbuf_lock; } ;


 int FUNC_0 (struct port*) ;
 int FUNC_1 (struct port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct port *VAR_0)
{
 FUNC_2(&VAR_0->inbuf_lock);

 FUNC_0(VAR_0);
 FUNC_3(&VAR_0->inbuf_lock);

 FUNC_2(&VAR_0->outvq_lock);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_0->outvq_lock);
}
