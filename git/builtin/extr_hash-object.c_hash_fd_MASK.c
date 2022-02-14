
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int index; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 scalar_t__ FUNC_2 (struct object_id*,int,char const*,unsigned int) ;
 scalar_t__ FUNC_3 (int ,struct object_id*,int,struct stat*,int ,char const*,unsigned int) ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (struct object_id*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(int VAR_3, const char *VAR_4, const char *VAR_5, unsigned VAR_6,
      int VAR_7)
{
 struct stat VAR_8;
 struct object_id VAR_9;

 if (FUNC_1(VAR_3, &VAR_8) < 0 ||
     (VAR_7
      ? FUNC_2(&VAR_9, VAR_3, VAR_4, VAR_6)
      : FUNC_3(VAR_2->index, &VAR_9, VAR_3, &VAR_8,
   FUNC_7(VAR_4), VAR_5, VAR_6)))
  FUNC_0((VAR_6 & VAR_0)
      ? "Unable to add %s to database"
      : "Unable to hash %s", VAR_5);
 FUNC_6("%s\n", FUNC_5(&VAR_9));
 FUNC_4(VAR_1, "hash to stdout");
}
