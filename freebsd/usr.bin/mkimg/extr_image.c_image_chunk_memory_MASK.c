
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ptr; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct chunk {scalar_t__ ch_block; scalar_t__ ch_size; TYPE_2__ ch_u; int ch_type; } ;
typedef scalar_t__ lba_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct chunk*,struct chunk*,int ) ;
 void* FUNC_1 (int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct chunk* FUNC_3 (int) ;
 int FUNC_4 (struct chunk*,struct chunk*,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static struct chunk *
FUNC_5(struct chunk *VAR_5, lba_t VAR_6)
{
 struct chunk *VAR_7;
 void *VAR_8;

 VAR_8 = FUNC_1(1, VAR_4);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 if (VAR_5->ch_block < VAR_6) {
  VAR_7 = FUNC_3(sizeof(*VAR_7));
  if (VAR_7 == ((void*)0)) {
   FUNC_2(VAR_8);
   return (((void*)0));
  }
  FUNC_4(VAR_7, VAR_5, sizeof(*VAR_7));
  VAR_5->ch_size = (VAR_6 - VAR_5->ch_block) * VAR_4;
  VAR_7->ch_block = VAR_6;
  VAR_7->ch_size -= VAR_5->ch_size;
  FUNC_0(&VAR_2, VAR_5, VAR_7, VAR_1);
  VAR_3++;
  VAR_5 = VAR_7;
 }

 if (VAR_5->ch_size > VAR_4) {
  VAR_7 = FUNC_3(sizeof(*VAR_7));
  if (VAR_7 == ((void*)0)) {
   FUNC_2(VAR_8);
   return (((void*)0));
  }
  FUNC_4(VAR_7, VAR_5, sizeof(*VAR_7));
  VAR_5->ch_size = VAR_4;
  VAR_7->ch_block++;
  VAR_7->ch_size -= VAR_4;
  FUNC_0(&VAR_2, VAR_5, VAR_7, VAR_1);
  VAR_3++;
 }

 VAR_5->ch_type = VAR_0;
 VAR_5->ch_u.mem.ptr = VAR_8;
 return (VAR_5);
}
