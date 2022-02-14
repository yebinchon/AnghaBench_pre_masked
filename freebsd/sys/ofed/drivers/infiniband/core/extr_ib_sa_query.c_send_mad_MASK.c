
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_sa_query {int id; int flags; TYPE_1__* mad_buf; } ;
typedef int gfp_t ;
struct TYPE_2__ {int timeout_ms; struct ib_sa_query** context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct ib_sa_query*) ;
 int FUNC_3 (int *,struct ib_sa_query*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int VAR_3 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ib_sa_query *VAR_4, int VAR_5, gfp_t VAR_6)
{
 bool VAR_7 = FUNC_0(VAR_6);
 unsigned long VAR_8;
 int VAR_9, VAR_10;

 if (VAR_7)
  FUNC_4(VAR_6);
 FUNC_7(&VAR_2, VAR_8);

 VAR_10 = FUNC_3(&VAR_3, VAR_4, 0, 0, VAR_0);

 FUNC_8(&VAR_2, VAR_8);
 if (VAR_7)
  FUNC_5();
 if (VAR_10 < 0)
  return VAR_10;

 VAR_4->mad_buf->timeout_ms = VAR_5;
 VAR_4->mad_buf->context[0] = VAR_4;
 VAR_4->id = VAR_10;

 if (VAR_4->flags & VAR_1) {
  FUNC_2(VAR_4);
 }

 VAR_9 = FUNC_1(VAR_4->mad_buf, ((void*)0));
 if (VAR_9) {
  FUNC_7(&VAR_2, VAR_8);
  FUNC_6(&VAR_3, VAR_10);
  FUNC_8(&VAR_2, VAR_8);
 }






 return VAR_9 ? VAR_9 : VAR_10;
}
