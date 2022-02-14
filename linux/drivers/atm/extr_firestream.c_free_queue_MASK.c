
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int sa; int offset; } ;
struct fs_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct fs_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct fs_dev *VAR_1, struct queue *VAR_2)
{
 FUNC_5 ();

 FUNC_8 (VAR_1, FUNC_2(VAR_2->offset), 0);
 FUNC_8 (VAR_1, FUNC_0(VAR_2->offset), 0);
 FUNC_8 (VAR_1, FUNC_1(VAR_2->offset), 0);
 FUNC_8 (VAR_1, FUNC_3(VAR_2->offset), 0);


 FUNC_4 (VAR_0, "Free queue: %p\n", VAR_2->sa);
 FUNC_7 (VAR_2->sa);

 FUNC_6 ();
}
