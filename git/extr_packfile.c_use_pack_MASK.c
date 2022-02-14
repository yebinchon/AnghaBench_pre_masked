
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_git {scalar_t__ pack_size; int pack_fd; struct pack_window* windows; int do_not_close; int pack_name; } ;
struct pack_window {scalar_t__ offset; size_t len; scalar_t__ base; int inuse_cnt; scalar_t__ last_used; struct pack_window* next; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ rawsz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct packed_git*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (struct pack_window*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct packed_git*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 scalar_t__ FUNC_6 (struct packed_git*) ;
 struct pack_window* FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int *,size_t,int ,int ,int,scalar_t__) ;
 unsigned long FUNC_9 (scalar_t__) ;

unsigned char *FUNC_10(struct packed_git *VAR_12,
  struct pack_window **VAR_13,
  off_t VAR_14,
  unsigned long *VAR_15)
{
 struct pack_window *VAR_16 = *VAR_13;






 if (!VAR_12->pack_size && VAR_12->pack_fd == -1 && FUNC_5(VAR_12))
  FUNC_2("packfile %s cannot be accessed", VAR_12->pack_name);
 if (VAR_14 > (VAR_12->pack_size - VAR_11->rawsz))
  FUNC_2("offset beyond end of packfile (truncated pack?)");
 if (VAR_14 < 0)
  FUNC_2(FUNC_0("offset before end of packfile (broken .idx?)"));

 if (!VAR_16 || !FUNC_4(VAR_16, VAR_14)) {
  if (VAR_16)
   VAR_16->inuse_cnt--;
  for (VAR_16 = VAR_12->windows; VAR_16; VAR_16 = VAR_16->next) {
   if (FUNC_4(VAR_16, VAR_14))
    break;
  }
  if (!VAR_16) {
   size_t VAR_17 = VAR_8 / 2;
   off_t VAR_18;

   if (VAR_12->pack_fd == -1 && FUNC_5(VAR_12))
    FUNC_2("packfile %s cannot be accessed", VAR_12->pack_name);

   VAR_16 = FUNC_7(1, sizeof(*VAR_16));
   VAR_16->offset = (VAR_14 / VAR_17) * VAR_17;
   VAR_18 = VAR_12->pack_size - VAR_16->offset;
   if (VAR_18 > VAR_8)
    VAR_18 = VAR_8;
   VAR_16->len = (size_t)VAR_18;
   VAR_3 += VAR_16->len;
   while (VAR_7 < VAR_3
    && FUNC_6(VAR_12))
    ;
   VAR_16->base = FUNC_8(((void*)0), VAR_16->len,
    VAR_2, VAR_1,
    VAR_12->pack_fd, VAR_16->offset);
   if (VAR_16->base == VAR_0)
    FUNC_3("packfile %s cannot be mapped",
       VAR_12->pack_name);
   if (!VAR_16->offset && VAR_16->len == VAR_12->pack_size
    && !VAR_12->do_not_close)
    FUNC_1(VAR_12);
   VAR_4++;
   VAR_5++;
   if (VAR_3 > VAR_9)
    VAR_9 = VAR_3;
   if (VAR_5 > VAR_10)
    VAR_10 = VAR_5;
   VAR_16->next = VAR_12->windows;
   VAR_12->windows = VAR_16;
  }
 }
 if (VAR_16 != *VAR_13) {
  VAR_16->last_used = VAR_6++;
  VAR_16->inuse_cnt++;
  *VAR_13 = VAR_16;
 }
 VAR_14 -= VAR_16->offset;
 if (VAR_15)
  *VAR_15 = VAR_16->len - FUNC_9(VAR_14);
 return VAR_16->base + VAR_14;
}
