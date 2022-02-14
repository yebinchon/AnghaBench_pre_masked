
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct floppy_state {struct request* cur_req; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct request*,int ) ;
 unsigned int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*,int ,unsigned int) ;
 int FUNC_3 (char*,int ,unsigned int,struct request*) ;

__attribute__((used)) static bool FUNC_4(struct floppy_state *VAR_0, blk_status_t VAR_1, unsigned int VAR_2)
{
 struct request *VAR_3 = VAR_0->cur_req;

 FUNC_3("  end request, err=%d nr_bytes=%d, cur_req=%p\n",
    VAR_1, VAR_2, VAR_3);

 if (VAR_1)
  VAR_2 = FUNC_1(VAR_3);
 if (FUNC_2(VAR_3, VAR_1, VAR_2))
  return 1;
 FUNC_0(VAR_3, VAR_1);
 VAR_0->cur_req = ((void*)0);
 return 0;
}
