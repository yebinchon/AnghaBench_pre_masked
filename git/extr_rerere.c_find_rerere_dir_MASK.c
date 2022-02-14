
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rerere_dir {scalar_t__ status_alloc; scalar_t__ status_nr; int * status; int hash; } ;


 int FUNC_0 (struct rerere_dir**,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rerere_dir**,struct rerere_dir**,int) ;
 scalar_t__ FUNC_2 (char const*,unsigned char*) ;
 int FUNC_3 (int ,unsigned char*) ;
 struct rerere_dir** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct rerere_dir*) ;
 int FUNC_5 (unsigned char*,struct rerere_dir**,int,int ) ;
 struct rerere_dir* FUNC_6 (int) ;

__attribute__((used)) static struct rerere_dir *FUNC_7(const char *VAR_5)
{
 unsigned char VAR_6[VAR_0];
 struct rerere_dir *VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_5, VAR_6))
  return ((void*)0);
 VAR_8 = FUNC_5(VAR_6, VAR_1, VAR_4, VAR_3);
 if (VAR_8 < 0) {
  VAR_7 = FUNC_6(sizeof(*VAR_7));
  FUNC_3(VAR_7->hash, VAR_6);
  VAR_7->status = ((void*)0);
  VAR_7->status_nr = 0;
  VAR_7->status_alloc = 0;
  VAR_8 = -1 - VAR_8;


  FUNC_0(VAR_1, VAR_4 + 1, VAR_2);

  VAR_4++;
  FUNC_1(VAR_1 + VAR_8 + 1, VAR_1 + VAR_8,
      VAR_4 - VAR_8 - 1);
  VAR_1[VAR_8] = VAR_7;
  FUNC_4(VAR_7);
 }
 return VAR_1[VAR_8];
}
