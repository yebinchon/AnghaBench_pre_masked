
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuinfo_tree {TYPE_1__* nodes; } ;
struct TYPE_2__ {int level; int rover; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct cpuinfo_tree*,int,unsigned int,int const*) ;
 int* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct cpuinfo_tree *VAR_5, unsigned int VAR_6)
{
 const int *VAR_7;
 int VAR_8, VAR_9, VAR_10 = VAR_6;

 switch (VAR_4) {
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 131:
 case 130:
 case 129:
 case 128:
 case 132:
  VAR_7 = VAR_3;
  break;
 default:
  VAR_7 = VAR_2;
 }

 for (VAR_8 = VAR_5->nodes[VAR_6].level; VAR_8 < VAR_0;
      VAR_8++) {
  VAR_9 = VAR_5->nodes[VAR_10].rover;
  if (VAR_7[VAR_8] & VAR_1)
   FUNC_0(VAR_5, VAR_10, VAR_6, VAR_7);

  VAR_10 = VAR_9;
 }
 return VAR_10;
}
