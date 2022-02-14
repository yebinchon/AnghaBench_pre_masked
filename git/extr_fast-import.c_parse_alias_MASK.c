
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_entry {int dummy; } ;
struct branch {int oid; } ;
typedef int b ;
struct TYPE_2__ {int buf; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct object_entry*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 struct object_entry* FUNC_3 (int *) ;
 int FUNC_4 (int ,struct object_entry*) ;
 int FUNC_5 (struct branch*,int ,int) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 (struct branch*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
 struct object_entry *VAR_2;
 struct branch VAR_3;

 FUNC_9();
 FUNC_8();


 FUNC_6();
 if (!VAR_1)
  FUNC_2(FUNC_0("Expected 'mark' command, got %s"), VAR_0.buf);


 FUNC_5(&VAR_3, 0, sizeof(VAR_3));
 if (!FUNC_7(&VAR_3, "to "))
  FUNC_2(FUNC_0("Expected 'to' command, got %s"), VAR_0.buf);
 VAR_2 = FUNC_3(&VAR_3.oid);
 FUNC_1(VAR_2);
 FUNC_4(VAR_1, VAR_2);
}
