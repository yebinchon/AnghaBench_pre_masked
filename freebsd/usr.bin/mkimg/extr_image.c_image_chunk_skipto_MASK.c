
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
struct chunk {long long ch_block; long long ch_size; scalar_t__ ch_type; } ;
typedef long long lba_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 int FUNC_0 (int *,struct chunk*,int ) ;
 struct chunk* FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_3 (struct chunk*,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 struct chunk* FUNC_4 (int) ;
 int FUNC_5 (struct chunk*,int ,int) ;
 long long VAR_8 ;

__attribute__((used)) static int
FUNC_6(lba_t VAR_9)
{
 struct chunk *VAR_10;
 lba_t VAR_11;
 size_t VAR_12;

 VAR_10 = FUNC_1(&VAR_6, VAR_5);
 VAR_11 = (VAR_10 != ((void*)0)) ? VAR_10->ch_block + (VAR_10->ch_size / VAR_8) : 0LL;

 FUNC_2(VAR_11 <= VAR_9);


 if (VAR_11 == VAR_9)
  return (0);

 if ((uintmax_t)(VAR_9 - VAR_11) > (uintmax_t)(VAR_3 / VAR_8))
  return (VAR_1);
 VAR_12 = (VAR_9 - VAR_11) * VAR_8;
 if (VAR_10 != ((void*)0) && VAR_10->ch_type == VAR_0) {
  VAR_12 = FUNC_3(VAR_10, VAR_12);
  if (VAR_12 == 0)
   return (0);
  VAR_11 = VAR_10->ch_block + (VAR_10->ch_size / VAR_8);
 }
 VAR_10 = FUNC_4(sizeof(*VAR_10));
 if (VAR_10 == ((void*)0))
  return (VAR_2);
 FUNC_5(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->ch_block = VAR_11;
 VAR_10->ch_size = VAR_12;
 VAR_10->ch_type = VAR_0;
 FUNC_0(&VAR_6, VAR_10, VAR_4);
 VAR_7++;
 return (0);
}
