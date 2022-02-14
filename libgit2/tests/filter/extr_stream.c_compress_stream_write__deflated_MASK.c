
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct compress_stream {scalar_t__ current_chunk; char current; TYPE_1__* next; } ;
struct TYPE_2__ {int (* write ) (TYPE_1__*,char*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct compress_stream *VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;

 while (VAR_3 > 0) {
  size_t VAR_5, VAR_6;

  if (VAR_1->current_chunk == 0)
   VAR_1->current = VAR_2[VAR_4];

  VAR_5 = VAR_0 - VAR_1->current_chunk;
  VAR_6 = FUNC_1(VAR_5, VAR_3);

  VAR_1->current_chunk += VAR_6;
  VAR_3 -= VAR_6;
  VAR_4 += VAR_6;

  if (VAR_1->current_chunk == VAR_0) {
   FUNC_0(VAR_1->next->write(VAR_1->next, &VAR_1->current, 1));
   VAR_1->current_chunk = 0;
  }
 }

 return 0;
}
