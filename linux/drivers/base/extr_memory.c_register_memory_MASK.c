
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int offline; int groups; int release; int * bus; } ;
struct memory_block {int start_section_nr; scalar_t__ state; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static
int FUNC_2(struct memory_block *VAR_5)
{
 int VAR_6;

 VAR_5->dev.bus = &VAR_3;
 VAR_5->dev.id = VAR_5->start_section_nr / VAR_4;
 VAR_5->dev.release = VAR_1;
 VAR_5->dev.groups = VAR_2;
 VAR_5->dev.offline = VAR_5->state == VAR_0;

 VAR_6 = FUNC_0(&VAR_5->dev);
 if (VAR_6)
  FUNC_1(&VAR_5->dev);

 return VAR_6;
}
