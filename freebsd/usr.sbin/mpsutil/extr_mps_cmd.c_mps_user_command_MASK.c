
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct mps_usr_command {int len; void* flags; void* buf; void* rpl_len; void* rpl; void* req_len; void* req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mps_usr_command*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ,struct mps_usr_command*) ;
 scalar_t__ VAR_3 ;

int
FUNC_2(int VAR_4, void *VAR_5, uint32_t VAR_6, void *VAR_7,
        uint32_t VAR_8, void *VAR_9, int VAR_10, uint32_t VAR_11)
{
 struct mps_usr_command VAR_12;

 FUNC_0(&VAR_12, sizeof(struct mps_usr_command));
 VAR_12.req = VAR_5;
 VAR_12.req_len = VAR_6;
 VAR_12.rpl = VAR_7;
 VAR_12.rpl_len = VAR_8;
 VAR_12.buf = VAR_9;
 VAR_12.len = VAR_10;
 VAR_12.flags = VAR_11;

 if (FUNC_1(VAR_4, VAR_3 ? VAR_1 : VAR_0, &VAR_12) < 0)
  return (VAR_2);
 return (0);
}
