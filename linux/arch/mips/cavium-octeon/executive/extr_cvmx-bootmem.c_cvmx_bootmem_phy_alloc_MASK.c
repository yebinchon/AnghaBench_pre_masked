
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_2__ {int major_version; int head_addr; scalar_t__ minor_version; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,unsigned long long,unsigned long long,...) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;

int64_t FUNC_10(uint64_t VAR_4, uint64_t VAR_5,
          uint64_t VAR_6, uint64_t VAR_7,
          uint32_t VAR_8)
{

 uint64_t VAR_9;
 uint64_t VAR_10;

 uint64_t VAR_11 = 0;
 uint64_t VAR_12 = 0;
 uint64_t VAR_13;
 if (VAR_3->major_version > 3) {
  FUNC_7("ERROR: Incompatible bootmem descriptor "
        "version: %d.%d at addr: %p\n",
        (int)VAR_3->major_version,
        (int)VAR_3->minor_version,
        VAR_3);
  goto error_out;
 }
 if (!VAR_4)
  goto error_out;


 VAR_4 = (VAR_4 + (VAR_0 - 1)) &
  ~(VAR_0 - 1);







 if (VAR_5 && !VAR_6)
  VAR_6 = VAR_5 + VAR_4;
 else if (!VAR_5 && !VAR_6)
  VAR_6 = ~0ull;






 if (VAR_7 < VAR_0)
  VAR_7 = VAR_0;






 if (VAR_7)
  VAR_5 = FUNC_0(VAR_5, VAR_7);






 if (VAR_4 > VAR_6 - VAR_5)
  goto error_out;



 if (!(VAR_8 & VAR_2))
  FUNC_1();
 VAR_9 = VAR_3->head_addr;
 VAR_10 = VAR_9;
 for (; VAR_10;
      VAR_11 = VAR_10,
      VAR_10 = FUNC_2(VAR_10)) {
  uint64_t VAR_14, VAR_15;
  uint64_t VAR_16 = FUNC_3(VAR_10);

  if (FUNC_2(VAR_10)
      && VAR_10 > FUNC_2(VAR_10)) {
   FUNC_7("Internal bootmem_alloc() error: ent: "
    "0x%llx, next: 0x%llx\n",
    (unsigned long long)VAR_10,
    (unsigned long long)
    FUNC_2(VAR_10));
   goto error_out;
  }






  VAR_14 =
      FUNC_0(FUNC_8(VAR_5, VAR_10), VAR_7);
  VAR_15 = FUNC_9(VAR_6, VAR_10 + VAR_16);





  VAR_13 = VAR_14;




  if (!((VAR_10 + VAR_16) > VAR_14
    && VAR_10 < VAR_6
    && VAR_4 <= VAR_15 - VAR_14))
   continue;






  if (VAR_8 & VAR_1) {
   VAR_13 = VAR_15 - VAR_4;




   VAR_13 &= ~(VAR_7 - 1);
  }


  if (VAR_13 == VAR_10) {
   if (VAR_4 < VAR_16) {




    VAR_12 = VAR_10 + VAR_4;
    FUNC_4(VAR_12,
     FUNC_2(VAR_10));
    FUNC_5(VAR_12,
       VAR_16 -
       VAR_4);





    FUNC_4(VAR_10,
       VAR_12);
   }





   if (VAR_11)
    FUNC_4(VAR_11,
     FUNC_2(VAR_10));
   else




    VAR_3->head_addr =
     FUNC_2(VAR_10);

   if (!(VAR_8 & VAR_2))
    FUNC_6();
   return VAR_13;
  }
  VAR_12 = VAR_13;
  FUNC_4(VAR_12,
     FUNC_2
     (VAR_10));
  FUNC_5(VAR_12,
     FUNC_3
     (VAR_10) -
     (VAR_13 -
      VAR_10));
  FUNC_5(VAR_10,
     VAR_13 - VAR_10);
  FUNC_4(VAR_10, VAR_12);

 }
error_out:

 if (!(VAR_8 & VAR_2))
  FUNC_6();
 return -1;
}
