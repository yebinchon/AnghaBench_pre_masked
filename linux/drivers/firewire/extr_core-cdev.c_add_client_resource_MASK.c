
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_resource {int handle; } ;
struct client {int lock; int resource_idr; scalar_t__ in_shutdown; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct client_resource*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct client_resource*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct client *VAR_2,
          struct client_resource *VAR_3, gfp_t VAR_4)
{
 bool VAR_5 = FUNC_1(VAR_4);
 unsigned long VAR_6;
 int VAR_7;

 if (VAR_5)
  FUNC_3(VAR_4);
 FUNC_6(&VAR_2->lock, VAR_6);

 if (VAR_2->in_shutdown)
  VAR_7 = -VAR_0;
 else
  VAR_7 = FUNC_2(&VAR_2->resource_idr, VAR_3, 0, 0,
    VAR_1);
 if (VAR_7 >= 0) {
  VAR_3->handle = VAR_7;
  FUNC_0(VAR_2);
  FUNC_5(VAR_3);
 }

 FUNC_7(&VAR_2->lock, VAR_6);
 if (VAR_5)
  FUNC_4();

 return VAR_7 < 0 ? VAR_7 : 0;
}
