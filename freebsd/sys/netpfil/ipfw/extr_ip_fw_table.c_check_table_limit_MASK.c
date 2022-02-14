
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tentry_info {int flags; } ;
struct table_config {scalar_t__ limit; scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct table_config *VAR_4, struct tentry_info *VAR_5)
{

 if (VAR_4->limit == 0 || VAR_4->count < VAR_4->limit)
  return (0);

 if ((VAR_5->flags & VAR_3) == 0) {

  VAR_5->flags |= VAR_2;
  return (VAR_0);
 }







 VAR_5->flags |= VAR_1;

 return (0);
}
