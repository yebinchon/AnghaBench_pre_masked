
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct coprocessor_status_block {int dummy; } ;
struct coprocessor_request_block {int csb_addr; int target; int source; struct coprocessor_status_block csb; } ;
struct nx842_workmem {int ddl_out; int ddl_in; struct coprocessor_request_block crb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct coprocessor_request_block*,int ,int) ;
 int FUNC_2 (struct coprocessor_status_block*) ;
 int FUNC_3 (int *,int ,unsigned char*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(const unsigned char *VAR_2, unsigned int VAR_3,
   unsigned char *VAR_4, unsigned int VAR_5,
   struct nx842_workmem *VAR_6)
{
 struct coprocessor_request_block *VAR_7;
 struct coprocessor_status_block *VAR_8;
 u64 VAR_9;
 int VAR_10;

 VAR_7 = &VAR_6->crb;
 VAR_8 = &VAR_7->csb;


 FUNC_1(VAR_7, 0, sizeof(*VAR_7));


 VAR_10 = FUNC_3(&VAR_7->source, VAR_6->ddl_in,
   (unsigned char *)VAR_2, VAR_3, 1);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(&VAR_7->target, VAR_6->ddl_out,
   VAR_4, VAR_5, 0);
 if (VAR_10)
  return VAR_10;


 VAR_9 = FUNC_2(VAR_8) & VAR_0;
 VAR_9 |= VAR_1;
 VAR_7->csb_addr = FUNC_0(VAR_9);

 return 0;
}
