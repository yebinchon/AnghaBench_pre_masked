
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct srp_indirect_buf {int dummy; } ;
struct srp_direct_buf {int dummy; } ;
struct srp_cmd {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static uint32_t FUNC_1(int VAR_3, bool VAR_4)
{
 uint32_t VAR_5 = sizeof(struct srp_cmd) + VAR_1 +
  sizeof(struct srp_indirect_buf) +
  VAR_3 * sizeof(struct srp_direct_buf);

 if (VAR_4)
  VAR_5 = FUNC_0(VAR_5, VAR_0 +
     VAR_2);

 return VAR_5;
}
