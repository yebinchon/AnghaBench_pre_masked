
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int q; int start_time_ns; int rq_flags; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct request*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct request*,scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static blk_status_t FUNC_4(struct request *VAR_4, struct request *VAR_5)
{
 blk_status_t VAR_6;

 if (FUNC_1(VAR_4->q))
  VAR_4->rq_flags |= VAR_3;

 VAR_4->start_time_ns = FUNC_3();
 VAR_6 = FUNC_0(VAR_4->q, VAR_4);
 if (VAR_6 != VAR_1 && VAR_6 != VAR_2 && VAR_6 != VAR_0)

  FUNC_2(VAR_5, VAR_6);
 return VAR_6;
}
