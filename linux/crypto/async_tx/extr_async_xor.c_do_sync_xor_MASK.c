
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct async_submit_ctl {void** scribble; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct async_submit_ctl*) ;
 int FUNC_1 (void*,int ,size_t) ;
 int FUNC_2 (int,int ) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (int,size_t,void*,void**) ;

__attribute__((used)) static void
FUNC_5(struct page *VAR_2, struct page **VAR_3, unsigned int VAR_4,
     int VAR_5, size_t VAR_6, struct async_submit_ctl *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 void *VAR_11;
 void **VAR_12;

 if (VAR_7->scribble)
  VAR_12 = VAR_7->scribble;
 else
  VAR_12 = (void **) VAR_3;


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  if (VAR_3[VAR_8])
   VAR_12[VAR_9++] = FUNC_3(VAR_3[VAR_8]) + VAR_4;
 VAR_5 = VAR_9;

 VAR_11 = FUNC_3(VAR_2) + VAR_4;

 if (VAR_7->flags & VAR_0)
  FUNC_1(VAR_11, 0, VAR_6);

 while (VAR_5 > 0) {

  VAR_9 = FUNC_2(VAR_5, VAR_1);
  FUNC_4(VAR_9, VAR_6, VAR_11, &VAR_12[VAR_10]);


  VAR_5 -= VAR_9;
  VAR_10 += VAR_9;
 }

 FUNC_0(VAR_7);
}
