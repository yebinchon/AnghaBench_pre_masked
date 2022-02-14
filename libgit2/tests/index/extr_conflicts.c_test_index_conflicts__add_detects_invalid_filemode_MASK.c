
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* path; int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int VAR_3 ;

void FUNC_7(void)
{
 git_index_entry VAR_4, VAR_5, VAR_6;
 git_index_entry *VAR_7[3];
 int VAR_8;

 FUNC_1(FUNC_4(VAR_3) == 8);

 FUNC_6(&VAR_4, 0x0, sizeof(git_index_entry));
 FUNC_6(&VAR_5, 0x0, sizeof(git_index_entry));
 FUNC_6(&VAR_6, 0x0, sizeof(git_index_entry));

 VAR_7[0] = &VAR_4;
 VAR_7[1] = &VAR_5;
 VAR_7[2] = &VAR_6;

 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  VAR_4.path = "test-one.txt";
  VAR_4.mode = 0100644;
  FUNC_0(&VAR_4, 3);
  FUNC_5(&VAR_4.id, VAR_0);

  VAR_5.path = "test-one.txt";
  VAR_5.mode = 0100644;
  FUNC_0(&VAR_5, 1);
  FUNC_5(&VAR_5.id, VAR_1);

  VAR_6.path = "test-one.txt";
  VAR_6.mode = 0100644;
  FUNC_0(&VAR_6, 2);
  FUNC_5(&VAR_6.id, VAR_2);


  VAR_7[VAR_8]->mode = 027431745;

  FUNC_2(FUNC_3(VAR_3, &VAR_4, &VAR_5, &VAR_6));
 }

 FUNC_1(FUNC_4(VAR_3) == 8);
}
