
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; scalar_t__ ofs; } ;
struct TYPE_4__ {TYPE_1__ file; } ;
struct chunk {scalar_t__ ch_type; scalar_t__ ch_block; int ch_size; TYPE_2__ ch_u; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ lba_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct chunk*,int ) ;
 struct chunk* FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (struct chunk*,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 struct chunk* FUNC_3 (int) ;
 int FUNC_4 (struct chunk*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(lba_t VAR_7, size_t VAR_8, off_t VAR_9, int VAR_10)
{
 struct chunk *VAR_11;

 VAR_11 = FUNC_1(&VAR_4, VAR_3);
 if (VAR_11 != ((void*)0) && VAR_11->ch_type == VAR_0) {
  if (VAR_10 == VAR_11->ch_u.file.fd &&
      VAR_7 == (lba_t)(VAR_11->ch_block + (VAR_11->ch_size / VAR_6)) &&
      VAR_9 == (off_t)(VAR_11->ch_u.file.ofs + VAR_11->ch_size)) {
   VAR_8 = FUNC_2(VAR_11, VAR_8);
   if (VAR_8 == 0)
    return (0);
   VAR_7 = VAR_11->ch_block + (VAR_11->ch_size / VAR_6);
   VAR_9 = VAR_11->ch_u.file.ofs + VAR_11->ch_size;
  }
 }
 VAR_11 = FUNC_3(sizeof(*VAR_11));
 if (VAR_11 == ((void*)0))
  return (VAR_1);
 FUNC_4(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->ch_block = VAR_7;
 VAR_11->ch_size = VAR_8;
 VAR_11->ch_type = VAR_0;
 VAR_11->ch_u.file.ofs = VAR_9;
 VAR_11->ch_u.file.fd = VAR_10;
 FUNC_0(&VAR_4, VAR_11, VAR_2);
 VAR_5++;
 return (0);
}
