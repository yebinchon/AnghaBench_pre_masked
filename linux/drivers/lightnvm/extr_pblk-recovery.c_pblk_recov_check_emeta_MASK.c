
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pblk {int dummy; } ;
struct TYPE_2__ {int identifier; } ;
struct line_emeta {TYPE_1__ header; int crc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pblk*,struct line_emeta*) ;

int FUNC_2(struct pblk *VAR_1, struct line_emeta *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (FUNC_0(VAR_2->crc) != VAR_3)
  return 1;

 if (FUNC_0(VAR_2->header.identifier) != VAR_0)
  return 1;

 return 0;
}
