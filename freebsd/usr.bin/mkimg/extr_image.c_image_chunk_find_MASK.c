
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chunk {scalar_t__ ch_block; int ch_size; } ;
typedef scalar_t__ lba_t ;


 struct chunk* FUNC_0 (int *) ;
 struct chunk* FUNC_1 (struct chunk*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct chunk *
FUNC_2(lba_t VAR_3)
{
 static struct chunk *VAR_4 = ((void*)0);
 struct chunk *VAR_5;

 VAR_5 = (VAR_4 != ((void*)0) && VAR_4->ch_block <= VAR_3)
     ? VAR_4 : FUNC_0(&VAR_1);
 while (VAR_5 != ((void*)0)) {
  if (VAR_5->ch_block <= VAR_3 &&
      (lba_t)(VAR_5->ch_block + (VAR_5->ch_size / VAR_2)) > VAR_3) {
   VAR_4 = VAR_5;
   break;
  }
  VAR_5 = FUNC_1(VAR_5, VAR_0);
 }
 return (VAR_5);
}
