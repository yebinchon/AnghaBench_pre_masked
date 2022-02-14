
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_git {int dummy; } ;
struct pack_window {int dummy; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {scalar_t__ rawsz; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned char*,struct packed_git*) ;
 TYPE_1__* VAR_2 ;
 unsigned char* FUNC_3 (struct packed_git*,struct pack_window**,int,int *) ;

__attribute__((used)) static off_t FUNC_4(struct packed_git *VAR_3,
        struct pack_window **VAR_4,
        off_t *VAR_5,
        enum object_type VAR_6,
        off_t VAR_7)
{
 unsigned char *VAR_8 = FUNC_3(VAR_3, VAR_4, *VAR_5, ((void*)0));
 off_t VAR_9;







 if (VAR_6 == VAR_0) {
  unsigned VAR_10 = 0;
  unsigned char VAR_11 = VAR_8[VAR_10++];
  VAR_9 = VAR_11 & 127;
  while (VAR_11 & 128) {
   VAR_9 += 1;
   if (!VAR_9 || FUNC_0(VAR_9, 7))
    return 0;
   VAR_11 = VAR_8[VAR_10++];
   VAR_9 = (VAR_9 << 7) + (VAR_11 & 127);
  }
  VAR_9 = VAR_7 - VAR_9;
  if (VAR_9 <= 0 || VAR_9 >= VAR_7)
   return 0;
  *VAR_5 += VAR_10;
 } else if (VAR_6 == VAR_1) {

  VAR_9 = FUNC_2(VAR_8, VAR_3);
  *VAR_5 += VAR_2->rawsz;
 } else
  FUNC_1("I am totally screwed");
 return VAR_9;
}
