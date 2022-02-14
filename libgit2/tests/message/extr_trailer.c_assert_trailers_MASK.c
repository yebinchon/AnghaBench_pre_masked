
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t count; TYPE_1__* trailers; } ;
typedef TYPE_2__ git_message_trailer_array ;
struct TYPE_9__ {int value; int key; } ;
typedef TYPE_3__ git_message_trailer ;
struct TYPE_7__ {int value; int key; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, git_message_trailer *VAR_1)
{
 git_message_trailer_array VAR_2;
 size_t VAR_3;

 int VAR_4 = FUNC_3(&VAR_2, VAR_0);

 FUNC_0(0, VAR_4);

 for(VAR_3=0; VAR_3<VAR_2.count; VAR_3++) {
  FUNC_1(VAR_2.trailers[VAR_3].key, VAR_1[VAR_3].key);
  FUNC_1(VAR_2.trailers[VAR_3].value, VAR_1[VAR_3].value);
 }

 FUNC_0(0, VAR_4);

 FUNC_2(&VAR_2);
}
