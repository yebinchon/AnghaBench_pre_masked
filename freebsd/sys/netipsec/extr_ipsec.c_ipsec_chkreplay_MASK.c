
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct secreplay {int wsize; scalar_t__ count; int lastseq; int* bitmap; int bitmap_size; } ;
struct secasvar {struct secreplay* replay; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_2(uint32_t VAR_2, struct secasvar *VAR_3)
{
 const struct secreplay *VAR_4;
 uint32_t VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(VAR_3 != ((void*)0), ("Null SA"));
 FUNC_0(VAR_3->replay != ((void*)0), ("Null replay state"));

 VAR_4 = VAR_3->replay;


 if (VAR_4->wsize == 0)
  return (1);


 VAR_5 = VAR_4->wsize << 3;


 if (VAR_2 == 0)
  return (0);


 if (VAR_4->count == 0)
  return (1);


 if (VAR_2 > VAR_4->lastseq)
  return (1);


 if (VAR_4->lastseq - VAR_2 >= VAR_5)
  return (0);





 VAR_7 = VAR_2 & VAR_0;
 VAR_6 = (VAR_2 >> VAR_1)
  & FUNC_1(VAR_4->bitmap_size);


 if ((VAR_4->bitmap)[VAR_6] & (1 << VAR_7))
  return (0);
 return (1);
}
