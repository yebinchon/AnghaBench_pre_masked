
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_context {int ac_read_fd; int ac_write_fd; int ac_buflen; int ac_seed; int ac_buffer; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct aio_context*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct aio_context *VAR_1, int VAR_2,
    int VAR_3, int VAR_4)
{

 FUNC_0(VAR_4 <= VAR_0,
     "aio_context_init: buffer too large (%d > %d)",
     VAR_4, VAR_0);
 FUNC_3(VAR_1, sizeof(*VAR_1));
 VAR_1->ac_read_fd = VAR_2;
 VAR_1->ac_write_fd = VAR_3;
 VAR_1->ac_buflen = VAR_4;
 FUNC_5();
 VAR_1->ac_seed = FUNC_4();
 FUNC_1(VAR_1->ac_buffer, VAR_4, VAR_1->ac_seed);
 FUNC_0(FUNC_2(VAR_1->ac_buffer, VAR_4,
     VAR_1->ac_seed) != 0, "aio_test_buffer: internal error");
}
