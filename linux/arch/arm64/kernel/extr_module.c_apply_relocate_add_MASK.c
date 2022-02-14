
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct module {int name; } ;
struct TYPE_11__ {int r_offset; int r_info; scalar_t__ r_addend; } ;
struct TYPE_10__ {int sh_size; size_t sh_info; scalar_t__ sh_addr; } ;
struct TYPE_9__ {scalar_t__ st_value; } ;
typedef TYPE_1__ Elf64_Sym ;
typedef TYPE_2__ Elf64_Shdr ;
typedef TYPE_3__ Elf64_Rela ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct module*,TYPE_2__*,void*,TYPE_3__*,TYPE_1__*) ;
 int FUNC_4 (char*,int ,int,...) ;
 int FUNC_5 (int ,void*,scalar_t__,int) ;
 int FUNC_6 (struct module*,TYPE_2__*,void*,scalar_t__) ;
 int FUNC_7 (int ,void*,scalar_t__,int,int,int ) ;
 int FUNC_8 (int ,void*,scalar_t__,int,int ) ;

int FUNC_9(Elf64_Shdr *VAR_12,
         const char *VAR_13,
         unsigned int VAR_14,
         unsigned int VAR_15,
         struct module *VAR_16)
{
 unsigned int VAR_17;
 int VAR_18;
 bool VAR_19;
 Elf64_Sym *VAR_20;
 void *VAR_21;
 u64 VAR_22;
 Elf64_Rela *VAR_23 = (void *)VAR_12[VAR_15].sh_addr;

 for (VAR_17 = 0; VAR_17 < VAR_12[VAR_15].sh_size / sizeof(*VAR_23); VAR_17++) {

  VAR_21 = (void *)VAR_12[VAR_12[VAR_15].sh_info].sh_addr
   + VAR_23[VAR_17].r_offset;


  VAR_20 = (Elf64_Sym *)VAR_12[VAR_14].sh_addr
   + FUNC_0(VAR_23[VAR_17].r_info);


  VAR_22 = VAR_20->st_value + VAR_23[VAR_17].r_addend;


  VAR_19 = 1;


  switch (FUNC_1(VAR_23[VAR_17].r_info)) {

  case 128:
  case 133:
   VAR_18 = 0;
   break;


  case 164:
   VAR_19 = 0;
   VAR_18 = FUNC_5(VAR_10, VAR_21, VAR_22, 64);
   break;
  case 165:
   VAR_18 = FUNC_5(VAR_10, VAR_21, VAR_22, 32);
   break;
  case 166:
   VAR_18 = FUNC_5(VAR_10, VAR_21, VAR_22, 16);
   break;
  case 130:
   VAR_19 = 0;
   VAR_18 = FUNC_5(VAR_11, VAR_21, VAR_22, 64);
   break;
  case 131:
   VAR_18 = FUNC_5(VAR_11, VAR_21, VAR_22, 32);
   break;
  case 132:
   VAR_18 = FUNC_5(VAR_11, VAR_21, VAR_22, 16);
   break;


  case 139:
   VAR_19 = 0;

  case 140:
   VAR_18 = FUNC_8(VAR_10, VAR_21, VAR_22, 0,
           VAR_5);
   break;
  case 137:
   VAR_19 = 0;

  case 138:
   VAR_18 = FUNC_8(VAR_10, VAR_21, VAR_22, 16,
           VAR_5);
   break;
  case 135:
   VAR_19 = 0;

  case 136:
   VAR_18 = FUNC_8(VAR_10, VAR_21, VAR_22, 32,
           VAR_5);
   break;
  case 134:

   VAR_19 = 0;
   VAR_18 = FUNC_8(VAR_10, VAR_21, VAR_22, 48,
           VAR_5);
   break;
  case 143:
   VAR_18 = FUNC_8(VAR_10, VAR_21, VAR_22, 0,
           VAR_6);
   break;
  case 142:
   VAR_18 = FUNC_8(VAR_10, VAR_21, VAR_22, 16,
           VAR_6);
   break;
  case 141:
   VAR_18 = FUNC_8(VAR_10, VAR_21, VAR_22, 32,
           VAR_6);
   break;
  case 149:
   VAR_19 = 0;
   VAR_18 = FUNC_8(VAR_11, VAR_21, VAR_22, 0,
           VAR_5);
   break;
  case 150:
   VAR_18 = FUNC_8(VAR_11, VAR_21, VAR_22, 0,
           VAR_6);
   break;
  case 147:
   VAR_19 = 0;
   VAR_18 = FUNC_8(VAR_11, VAR_21, VAR_22, 16,
           VAR_5);
   break;
  case 148:
   VAR_18 = FUNC_8(VAR_11, VAR_21, VAR_22, 16,
           VAR_6);
   break;
  case 145:
   VAR_19 = 0;
   VAR_18 = FUNC_8(VAR_11, VAR_21, VAR_22, 32,
           VAR_5);
   break;
  case 146:
   VAR_18 = FUNC_8(VAR_11, VAR_21, VAR_22, 32,
           VAR_6);
   break;
  case 144:

   VAR_19 = 0;
   VAR_18 = FUNC_8(VAR_11, VAR_21, VAR_22, 48,
           VAR_6);
   break;


  case 151:
   VAR_18 = FUNC_7(VAR_11, VAR_21, VAR_22, 2, 19,
          VAR_2);
   break;
  case 162:
   VAR_18 = FUNC_7(VAR_11, VAR_21, VAR_22, 0, 21,
          VAR_4);
   break;
  case 160:
   VAR_19 = 0;

  case 161:
   VAR_18 = FUNC_6(VAR_16, VAR_12, VAR_21, VAR_22);
   if (VAR_18 && VAR_18 != -VAR_9)
    return VAR_18;
   break;
  case 163:
  case 152:
   VAR_19 = 0;
   VAR_18 = FUNC_7(VAR_10, VAR_21, VAR_22, 0, 12,
          VAR_0);
   break;
  case 155:
   VAR_19 = 0;
   VAR_18 = FUNC_7(VAR_10, VAR_21, VAR_22, 1, 11,
          VAR_0);
   break;
  case 154:
   VAR_19 = 0;
   VAR_18 = FUNC_7(VAR_10, VAR_21, VAR_22, 2, 10,
          VAR_0);
   break;
  case 153:
   VAR_19 = 0;
   VAR_18 = FUNC_7(VAR_10, VAR_21, VAR_22, 3, 9,
          VAR_0);
   break;
  case 156:
   VAR_19 = 0;
   VAR_18 = FUNC_7(VAR_10, VAR_21, VAR_22, 4, 8,
          VAR_0);
   break;
  case 129:
   VAR_18 = FUNC_7(VAR_11, VAR_21, VAR_22, 2, 14,
          VAR_1);
   break;
  case 158:
   VAR_18 = FUNC_7(VAR_11, VAR_21, VAR_22, 2, 19,
          VAR_2);
   break;
  case 157:
  case 159:
   VAR_18 = FUNC_7(VAR_11, VAR_21, VAR_22, 2, 26,
          VAR_3);

   if (FUNC_2(VAR_7) &&
       VAR_18 == -VAR_9) {
    VAR_22 = FUNC_3(VAR_16, VAR_12, VAR_21, &VAR_23[VAR_17], VAR_20);
    if (!VAR_22)
     return -VAR_8;
    VAR_18 = FUNC_7(VAR_11, VAR_21, VAR_22, 2,
           26, VAR_3);
   }
   break;

  default:
   FUNC_4("module %s: unsupported RELA relocation: %llu\n",
          VAR_16->name, FUNC_1(VAR_23[VAR_17].r_info));
   return -VAR_8;
  }

  if (VAR_19 && VAR_18 == -VAR_9)
   goto overflow;

 }

 return 0;

overflow:
 FUNC_4("module %s: overflow in relocation type %d val %Lx\n",
        VAR_16->name, (int)FUNC_1(VAR_23[VAR_17].r_info), VAR_22);
 return -VAR_8;
}
