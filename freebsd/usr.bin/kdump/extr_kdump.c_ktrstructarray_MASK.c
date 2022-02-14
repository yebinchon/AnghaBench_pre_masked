
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktr_struct_array {size_t struct_size; } ;
struct kevent_freebsd11 {int data; int data2; int data1; void* udata; int fflags; int flags; int filter; int ident; } ;
struct kevent32_freebsd11 {int data; int data2; int data1; void* udata; int fflags; int flags; int filter; int ident; } ;
struct kevent32 {int data; int data2; int data1; void* udata; int fflags; int flags; int filter; int ident; } ;
struct kevent {int data; int data2; int data1; void* udata; int fflags; int flags; int filter; int ident; } ;
typedef int kev32 ;
typedef int kev11 ;
typedef int kev ;
typedef int int64_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (struct kevent_freebsd11*) ;
 int FUNC_2 (struct kevent_freebsd11*,char*,int) ;
 int FUNC_3 (struct kevent_freebsd11*,int ,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;

void
FUNC_6(struct ktr_struct_array *VAR_0, size_t VAR_1)
{
 struct kevent VAR_2;
 char *VAR_3, *VAR_4;
 size_t VAR_5, VAR_6;
 int VAR_7;
 bool VAR_8;

 VAR_1 -= sizeof(*VAR_0);
 for (VAR_3 = (char *)(VAR_0 + 1), VAR_5 = 0;
      VAR_5 < VAR_1 && VAR_3[VAR_5] != '\0';
      ++VAR_5)
               ;
 if (VAR_5 == VAR_1)
  goto invalid;
 if (VAR_3[VAR_5] != '\0')
  goto invalid;

 for (VAR_7 = 0; VAR_7 < (int)VAR_5; ++VAR_7)
  if (!FUNC_0(VAR_3[VAR_7]) && VAR_3[VAR_7] != '_')
   goto invalid;
 VAR_4 = VAR_3 + VAR_5 + 1;
 VAR_6 = VAR_1 - VAR_5 - 1;
 FUNC_4("struct %s[] = { ", VAR_3);
 VAR_8 = 1;
 for (; VAR_6 >= VAR_0->struct_size;
     VAR_4 += VAR_0->struct_size, VAR_6 -= VAR_0->struct_size) {
  if (!VAR_8)
   FUNC_4("\n             ");
  else
   VAR_8 = 0;
  if (FUNC_5(VAR_3, "kevent") == 0) {
   if (VAR_0->struct_size != sizeof(VAR_2))
    goto bad_size;
   FUNC_2(&VAR_2, VAR_4, sizeof(VAR_2));
   FUNC_1(&VAR_2);
  } else if (FUNC_5(VAR_3, "kevent_freebsd11") == 0) {
   struct kevent_freebsd11 VAR_9;

   if (VAR_0->struct_size != sizeof(VAR_9))
    goto bad_size;
   FUNC_2(&VAR_9, VAR_4, sizeof(VAR_9));
   FUNC_3(&VAR_2, 0, sizeof(VAR_2));
   VAR_2.ident = VAR_9;
   VAR_2.filter = VAR_9;
   VAR_2.flags = VAR_9;
   VAR_2.fflags = VAR_9;
   VAR_2.data = VAR_9;
   VAR_2.udata = VAR_9;
   FUNC_1(&VAR_2);
  } else {
   FUNC_4("<unknown structure> }\n");
   return;
  }
 }
 FUNC_4(" }\n");
 return;
invalid:
 FUNC_4("invalid record\n");
 return;
bad_size:
 FUNC_4("<bad size> }\n");
 return;
}
