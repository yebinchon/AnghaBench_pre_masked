
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_port_link {int speed; void* aneg; void* duplex; void* link; } ;
struct switch_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (struct switch_dev*,int ) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_8, int VAR_9, struct switch_port_link *VAR_10)
{
 if (VAR_9 >= VAR_4)
  return -VAR_1;


 VAR_10->link = FUNC_1(VAR_8, FUNC_0(VAR_9, VAR_2));
 if (!VAR_10->link)
  VAR_10->link = FUNC_1(VAR_8, FUNC_0(VAR_9, VAR_2));

 if (!VAR_10->link)
  return 0;

 VAR_10->duplex = FUNC_1(VAR_8, FUNC_0(VAR_9, VAR_0));
 VAR_10->aneg = FUNC_1(VAR_8, FUNC_0(VAR_9, VAR_3));

 if (FUNC_1(VAR_8, FUNC_0(VAR_9, VAR_5)))
  VAR_10->speed = VAR_7;
 else
  VAR_10->speed = VAR_6;

 return 0;
}
