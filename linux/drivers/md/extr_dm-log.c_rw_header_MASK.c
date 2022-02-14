
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_op; scalar_t__ bi_op_flags; } ;
struct log_c {int header_location; TYPE_1__ io_req; } ;


 int FUNC_0 (TYPE_1__*,int,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct log_c *VAR_0, int VAR_1)
{
 VAR_0->io_req.bi_op = VAR_1;
 VAR_0->io_req.bi_op_flags = 0;

 return FUNC_0(&VAR_0->io_req, 1, &VAR_0->header_location, ((void*)0));
}
