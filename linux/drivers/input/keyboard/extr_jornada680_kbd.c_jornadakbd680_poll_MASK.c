
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jornadakbd {int new_scan; int old_scan; } ;
struct input_polled_dev {struct jornadakbd* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct jornadakbd*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct input_polled_dev *VAR_1)
{
 struct jornadakbd *VAR_2 = VAR_1->private;

 FUNC_1(VAR_2->new_scan);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2->old_scan, VAR_2->new_scan, VAR_0);
}
