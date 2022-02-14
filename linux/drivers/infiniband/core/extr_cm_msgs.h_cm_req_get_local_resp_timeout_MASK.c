
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cm_req_msg {int offset44; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct cm_req_msg *VAR_0)
{
 return (u8) ((FUNC_0(VAR_0->offset44) & 0xF8) >> 3);
}
