
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (void*) ;
 size_t FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct kimage*,unsigned long,unsigned long,char*,void*) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (size_t) ;

__attribute__((used)) static int FUNC_7(struct kimage *VAR_4,
        unsigned long VAR_5, unsigned long VAR_6,
        char *VAR_7, void **VAR_8)
{
 void *VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_11 = VAR_7 ? FUNC_4(VAR_7) : 0;
 VAR_10 = FUNC_2(VAR_3)
   + VAR_11 + VAR_0;

 for (;;) {
  VAR_9 = FUNC_6(VAR_10);
  if (!VAR_9)
   return -VAR_2;


  VAR_12 = FUNC_0(VAR_3, VAR_9, VAR_10);
  if (VAR_12)
   return -VAR_1;

  VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6,
    VAR_7, VAR_9);
  if (VAR_12) {
   FUNC_5(VAR_9);
   if (VAR_12 == -VAR_2) {

    VAR_10 += VAR_0;
    continue;
   } else {
    return VAR_12;
   }
  }


  FUNC_1(VAR_9);
  *VAR_8 = VAR_9;

  return 0;
 }
}
