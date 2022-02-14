
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u_char ;
struct ber_element {unsigned long be_type; int be_len; int be_class; int be_encoding; long long be_numeric; int be_free; struct ber_element* be_next; struct ber_element* be_sub; int * be_val; } ;
struct ber {int fd; int br_rend; int br_rptr; unsigned long (* br_application ) (struct ber_element*) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ber*,long long*) ;
 int FUNC_3 (struct ber*,int *,int) ;
 int VAR_3 ;
 int FUNC_4 (struct ber*,unsigned long*,int*,int*) ;
 int FUNC_5 (struct ber*,int*) ;
 void* FUNC_6 (int) ;
 unsigned long FUNC_7 (struct ber_element*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct ber *VAR_4, struct ber_element *VAR_5)
{
 long long VAR_6 = 0;
 struct ber_element *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10, VAR_11;
 ssize_t VAR_12, VAR_13, VAR_14 = 0;
 u_char VAR_15;

 if ((VAR_13 = FUNC_4(VAR_4, &VAR_8, &VAR_10, &VAR_11)) == -1)
  return -1;
 FUNC_0("ber read got class %d type %lu, %s\n",
     VAR_10, VAR_8, VAR_11 ? "constructive" : "primitive");
 VAR_14 += VAR_13;
 if ((VAR_13 = FUNC_5(VAR_4, &VAR_12)) == -1)
  return -1;
 FUNC_0("ber read element size %zd\n", VAR_12);
 VAR_14 += VAR_13 + VAR_12;





 if (VAR_4->fd == -1 && VAR_12 > VAR_4->br_rend - VAR_4->br_rptr) {
  VAR_3 = VAR_1;
  return -1;
 }

 VAR_5->be_type = VAR_8;
 VAR_5->be_len = VAR_12;
 VAR_5->be_class = VAR_10;

 if (VAR_5->be_encoding == 0) {

  if (VAR_11)
   VAR_5->be_encoding = 129;
  else if (VAR_10 == VAR_0)
   VAR_5->be_encoding = VAR_8;
  else if (VAR_4->br_application != ((void*)0)) {





   VAR_5->be_encoding = (*VAR_4->br_application)(VAR_5);
  } else

   VAR_5->be_encoding = 132;
 }

 switch (VAR_5->be_encoding) {
 case 134:
  break;
 case 136:
 case 133:
 case 135:
  if (VAR_12 > (ssize_t)sizeof(long long))
   return -1;
  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
   if (FUNC_2(VAR_4, &VAR_15) != 1)
    return -1;
   VAR_6 <<= 8;
   VAR_6 |= VAR_15;
  }


  if (VAR_6 >> ((VAR_9 - 1) * 8) & 0x80)
   VAR_6 |= VAR_2 << (VAR_9 * 8);
  VAR_5->be_numeric = VAR_6;
  break;
 case 137:
  VAR_5->be_val = FUNC_6(VAR_12);
  if (VAR_5->be_val == ((void*)0))
   return -1;
  VAR_5->be_free = 1;
  VAR_5->be_len = VAR_12;
  FUNC_3(VAR_4, VAR_5->be_val, VAR_12);
  break;
 case 130:
 case 131:
  VAR_5->be_val = FUNC_6(VAR_12 + 1);
  if (VAR_5->be_val == ((void*)0))
   return -1;
  VAR_5->be_free = 1;
  VAR_5->be_len = VAR_12;
  FUNC_3(VAR_4, VAR_5->be_val, VAR_12);
  ((u_char *)VAR_5->be_val)[VAR_12] = '\0';
  break;
 case 132:
  if (VAR_12 != 0)
   return -1;
  break;
 case 129:
 case 128:
  if (VAR_5->be_sub == ((void*)0)) {
   if ((VAR_5->be_sub = FUNC_1(0)) == ((void*)0))
    return -1;
  }
  VAR_7 = VAR_5->be_sub;
  while (VAR_12 > 0) {
   VAR_13 = FUNC_8(VAR_4, VAR_7);
   if (VAR_13 == -1)
    return -1;
   VAR_12 -= VAR_13;
   if (VAR_12 > 0 && VAR_7->be_next == ((void*)0)) {
    if ((VAR_7->be_next = FUNC_1(0)) ==
        ((void*)0))
     return -1;
   }
   VAR_7 = VAR_7->be_next;
  }
  break;
 }
 return VAR_14;
}
