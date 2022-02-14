
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct compress_stream {TYPE_1__* next; } ;
struct TYPE_2__ {int (* write ) (TYPE_1__*,char*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct compress_stream *VAR_1, const char *VAR_2, size_t VAR_3)
{
 char VAR_4[VAR_0];
 size_t VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   VAR_4[VAR_6] = VAR_2[VAR_5];

  FUNC_0(VAR_1->next->write(VAR_1->next, VAR_4, VAR_0));
 }

 return 0;
}
