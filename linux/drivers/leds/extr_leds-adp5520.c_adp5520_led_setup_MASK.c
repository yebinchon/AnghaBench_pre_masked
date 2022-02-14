
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct adp5520_led {int flags; int id; struct device* master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (struct device*,int ,int ) ;
 int FUNC_1 (struct device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct adp5520_led *VAR_9)
{
 struct device *VAR_10 = VAR_9->master;
 int VAR_11 = VAR_9->flags;
 int VAR_12 = 0;

 switch (VAR_9->id) {
 case 130:
  VAR_12 |= FUNC_1(VAR_10, VAR_7,
     (VAR_11 >> VAR_2) &
     VAR_1);
  VAR_12 |= FUNC_1(VAR_10, VAR_6,
     VAR_3);
  break;
 case 129:
  VAR_12 |= FUNC_1(VAR_10, VAR_7,
     ((VAR_11 >> VAR_2) &
     VAR_1) << 2);
  VAR_12 |= FUNC_0(VAR_10, VAR_6,
      VAR_8);
  VAR_12 |= FUNC_1(VAR_10, VAR_6,
     VAR_4);
  break;
 case 128:
  VAR_12 |= FUNC_1(VAR_10, VAR_7,
     ((VAR_11 >> VAR_2) &
     VAR_1) << 4);
  VAR_12 |= FUNC_0(VAR_10, VAR_6,
     VAR_0);
  VAR_12 |= FUNC_1(VAR_10, VAR_6,
     VAR_5);
  break;
 }

 return VAR_12;
}
