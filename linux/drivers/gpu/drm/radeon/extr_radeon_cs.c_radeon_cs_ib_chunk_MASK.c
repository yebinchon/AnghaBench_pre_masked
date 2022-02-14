
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct radeon_cs_parser {int cs_flags; scalar_t__ ring; int ib; scalar_t__ parser_error; int * chunk_ib; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct radeon_device*,scalar_t__,struct radeon_cs_parser*) ;
 int FUNC_2 (struct radeon_cs_parser*) ;
 int FUNC_3 (struct radeon_device*,int *,int *,int) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_5,
         struct radeon_cs_parser *VAR_6)
{
 int VAR_7;

 if (VAR_6->chunk_ib == ((void*)0))
  return 0;

 if (VAR_6->cs_flags & VAR_2)
  return 0;

 VAR_7 = FUNC_1(VAR_5, VAR_6->ring, VAR_6);
 if (VAR_7 || VAR_6->parser_error) {
  FUNC_0("Invalid command stream !\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7) {
  if (VAR_7 != -VAR_0)
   FUNC_0("Failed to sync rings: %i\n", VAR_7);
  return VAR_7;
 }

 if (VAR_6->ring == VAR_1)
  FUNC_4(VAR_5);
 else if ((VAR_6->ring == VAR_3) ||
   (VAR_6->ring == VAR_4))
  FUNC_5(VAR_5);

 VAR_7 = FUNC_3(VAR_5, &VAR_6->ib, ((void*)0), 1);
 if (VAR_7) {
  FUNC_0("Failed to schedule IB !\n");
 }
 return VAR_7;
}
