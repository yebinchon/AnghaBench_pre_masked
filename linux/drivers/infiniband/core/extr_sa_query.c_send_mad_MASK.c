
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_sa_query {int id; int flags; TYPE_1__* mad_buf; } ;
typedef int gfp_t ;
struct TYPE_2__ {unsigned long timeout_ms; struct ib_sa_query** context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*,struct ib_sa_query*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ib_sa_query*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (struct ib_sa_query*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct ib_sa_query *VAR_5, unsigned long VAR_6,
      gfp_t VAR_7)
{
 unsigned long VAR_8;
 int VAR_9, VAR_10;

 FUNC_6(&VAR_3, VAR_8);
 VAR_9 = FUNC_0(&VAR_3, &VAR_10, VAR_5, VAR_4, VAR_7);
 FUNC_7(&VAR_3, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_5->mad_buf->timeout_ms = VAR_6;
 VAR_5->mad_buf->context[0] = VAR_5;
 VAR_5->id = VAR_10;

 if ((VAR_5->flags & VAR_0) &&
     (!(VAR_5->flags & VAR_1))) {
  if (FUNC_5(VAR_2)) {
   if (!FUNC_2(VAR_5, VAR_7))
    return VAR_10;
  }
  FUNC_4(VAR_5);
 }

 VAR_9 = FUNC_3(VAR_5->mad_buf, ((void*)0));
 if (VAR_9) {
  FUNC_6(&VAR_3, VAR_8);
  FUNC_1(&VAR_3, VAR_10);
  FUNC_7(&VAR_3, VAR_8);
 }






 return VAR_9 ? VAR_9 : VAR_10;
}
