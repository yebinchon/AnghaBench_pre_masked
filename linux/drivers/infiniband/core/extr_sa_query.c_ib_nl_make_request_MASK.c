
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ib_sa_query {int list; scalar_t__ timeout; scalar_t__ seq; } ;
typedef int gfp_t ;
struct TYPE_3__ {int * next; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ib_sa_query*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,unsigned long) ;
 int VAR_7 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ib_sa_query *VAR_8, gfp_t VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 FUNC_0(&VAR_8->list);
 VAR_8->seq = (u32)FUNC_1(&VAR_3);


 FUNC_7(&VAR_2, VAR_10);
 VAR_11 = FUNC_5(VAR_7);
 VAR_8->timeout = VAR_11 + VAR_6;
 FUNC_3(&VAR_8->list, &VAR_1);

 if (VAR_1.next == &VAR_8->list)
  FUNC_6(VAR_5, &VAR_4, VAR_11);
 FUNC_8(&VAR_2, VAR_10);

 VAR_12 = FUNC_2(VAR_8, VAR_9);
 if (VAR_12) {
  VAR_12 = -VAR_0;

  FUNC_7(&VAR_2, VAR_10);
  FUNC_4(&VAR_8->list);
  FUNC_8(&VAR_2, VAR_10);
 }

 return VAR_12;
}
